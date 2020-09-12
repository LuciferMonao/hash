/* main.c
 *
 * Copyright 2020 Lucifer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <stdio.h>
#include <stdlib.h>





int main () {
  
  unsigned long long start = 2;
  unsigned long long end;
  
  printf("What should be the end?\n");
  scanf("%llu", &end);
  
  

  
  
  printf("Starting runtime...\n");
  unsigned long long length = end - start;
  
  
  
   _Bool *list = malloc((length + 2) * sizeof(_Bool));
   if(list != NULL) {
      for (unsigned long long iter = 0; iter < length; iter++) {
        *(list+iter) = 1;
      }
   }
  
              
  for (unsigned long long iter = 0; iter <= length / 2; iter++) {
    if (list[iter] == 1) {
      for (unsigned long long iter_2 = iter + (iter + start); iter_2 < length; iter_2 += (iter + start)) {
        list[iter_2] = 0;
      }
    }
  }
  
  printf("Printing solutions:\n");
  for (unsigned long long iter = 0; iter < length; iter++) {
    if (list[iter] == 1) {
      printf("%llu;", iter + start);
    }
  }
  printf("Done. Shutting down runtime.");
  
  
  
  return 1;
}

