#include "replace.hpp"


static std::string new_filename(std::string filename)
{
  int i;
  std::string new_filename;

  new_filename = filename;
  for (i = new_filename.size() - 1; new_filename[i] != '.'; i--)
    new_filename.pop_back();
  new_filename += "replace";
  return new_filename;
}

//ofstream -> out file, create and write
//ifstream -> in file, read
//fstream -> Read, write and create
int main(int argc, char **argv)
{
  std::ifstream file_read(argv[1]);
  std::ofstream new_file(new_filename(std::string(argv[1])));
  char character;

  if (argc != 4)
  {
    std::cout << "Wrong number of arguments" << std::endl;
    return 1;
  }
  while((file_read.get(character)) != 0)
  {
    if (character != argv[2][0])
      new_file << character;
    else
    {
      int i;
      std::string buffer;

      character = argv[2][0];
      for (i = 0; character == argv[2][i]; i++)
      {
        buffer += character;
        file_read.get(character);
      }
       if (character != 0)
         file_read.seekg(-1, file_read.cur);
      //cur indicates the current cursor position, we go one back
      if (i < (int)strlen(argv[2]))
        new_file << buffer;
      else
        new_file << argv[3];
    }
  }
  file_read.close();
  new_file.close();
}
