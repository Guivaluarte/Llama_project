/* given a starting number of llamas n and a target number of llamas k,
*calculate in how many years the llamas number will reach the target number*/

/*Every year 1/3 of n llamas born, but 1/4 of n llamas dies*/


#include <stdio.h>


void llama_calculator(int, int);

int main() {

    //get from user their current llama population
    int llama_population,llama_goal;
    printf("Tell me how many llamas you have: ");
    scanf("%d", &llama_population);

    //get from user their desirable llama population, if this number is lower than current population ask again
    while(llama_goal < llama_population) {
        printf("What is your desired llama population?: ");
        scanf("%d", &llama_goal);
    }

    llama_calculator(llama_population, llama_goal);


  return 0;
}

// This Function Will Calculate The lost and born rate of llamas per year
void llama_calculator(int llama_number, int llama_target){
    int years = 0;

   //loop through every year adding and subtracting llamas.
    while(llama_number < llama_target) {
        llama_number += llama_number/12;

        years ++;
    }

    //print the result
    printf("in %d years you will have %d llamas",years,llama_number);



}
