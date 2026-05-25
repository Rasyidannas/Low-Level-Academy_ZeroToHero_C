#include <stdio.h>

// Global Scope
int g_num_persons = 0;

void some_other_function()
{
  int person_id = 1;
}

int main()
{
  //type name = initial value;
  int person_id = 0;
  person_id += 1;

  {
    int person_id = 0;
    person_id += 1;
  }
}
