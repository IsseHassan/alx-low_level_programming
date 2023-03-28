#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
  char password[PASSWORD_LENGTH + 1]; // Allocate an extra byte for the null terminator
  const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  const size_t charset_size = sizeof(charset) - 1; // We don't count the null terminator

  srand(time(NULL)); // Seed the random number generator with the current time

  for (size_t i = 0; i < PASSWORD_LENGTH; ++i) {
    password[i] = charset[rand() % charset_size];
  }
  password[PASSWORD_LENGTH] = '\0'; // Add the null terminator at the end

  printf("%s\n", password);

  return 0;
}

