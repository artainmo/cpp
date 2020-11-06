#include "serialization.hpp"

void random_aplhanum(char *name) //Automatic casting of void to char
{
  int i = 0;

  srand(time(NULL)); //If srand not initialized, random name will always be the same
  while (i < 8)
  {
    while (std::isalnum(name[i]) == 0)
      name[i] = rand() %  75 + 48; //Between 48-123 the numbers + signs + alphabet ascii values
    i++;
  }
}

void random_int(char *sequence)
{
  srand(time(NULL));

  *(reinterpret_cast<int *>(sequence)) = rand(); //Rand returns an integer already so no need to write whole function.
  //reinterpret_cast only guarantees that if you cast a pointer to a different type, and then reinterpret_cast it back to the original type, you get the original value.
  //That is why reinterpret_cast is used for pointers
}

void *serialize(void)
{
  char *sequence = new char[16 + sizeof(int)]; //one char = one byte, one int = 4bytes (8 + 4 + 8)

  random_aplhanum(sequence); //set 8 random chars at start pointer
  random_int(sequence + 8); //Set random int at 9th byte pointer
  sleep(1); //1second sleep because randomness is based on time, otherwise two times same string
  random_aplhanum(reinterpret_cast<char *>(sequence + 8 + sizeof(int))); //Set at 13th byte pointer 8 randon chars
  return sequence; //void pointers can return any pointers; char pointers too
}

Data *deserialize(void *raw) //Takes in as argument char pointers, c++ automatially casts it to void pointer
{
  char *sequence;
  Data *data = new Data;

  sequence = reinterpret_cast<char *>(raw); //Recast it to a char pointer
  data->s1 = std::string(sequence, 8); //Takes first 8 chars (8bytes)
  data->s2 = std::string(sequence + 8 + sizeof(int), 8); //Takes last 8 chars (8bytes)
  data->n = *(reinterpret_cast<int *>(sequence + 8)); //Takes middle int (4bytes), by pointing on correct memory and casting it to int
  P("===Freeing sequence===");
  delete sequence; //Freeing the malloced serial, void * cannot be freed but char * can be freed
  return(data);
}


//Goal of this exercise is to use funtions that take in void pointers, that thus can take in all types, by casting them they can be used as any type you want
//Use reinterpret_cast for pointers to maintain the value the pointer points to
int main()
{
  Data *data;

  data = deserialize(serialize());
  P("===Show data===");
  std::cout << "s1 : " << data->s1 << std::endl;
  std::cout << "n : " << data->n << std::endl;
  std::cout << "s2 : " << data->s2 << std::endl;
  P("===Freeing data===");
  delete data; //Freeing the malloced data struct


}
