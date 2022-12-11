#include <iostream>
#include<stdio.h>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main(){

    string alphabet;
    int num_elements, i=0;

    cin >> alphabet;

    num_elements = alphabet.size();

    int num_states;
    cin >> num_states;

    if(num_states < 0 || num_states > 10){
        return 0;
    }

    int initial_state;
    cin >> initial_state;

    int final_states[num_states], qtt_finalStates=0;
    char number;
    char nextChar;

    i=0;

    do{
        scanf("%d%c", &final_states[i], &number);
        i++;
        qtt_finalStates++;
    }while(number != '\n');

    if(i > num_states){
        return 0;
    }

    int num_transitions;
    cin >> num_transitions;

    if(num_transitions < 1 || num_transitions > (num_states * num_elements)){
        return 0;
    }

    int exit_state[num_transitions], arrive_state[num_transitions];
    char readed_simbol[num_transitions];

    for(i=0; i<num_transitions; i++){
        scanf("%d %c %d", &exit_state[i], &readed_simbol[i], &arrive_state[i]);
    }

    int num_tests;
    cin >> num_tests;

    if(num_tests < 1 || num_tests > 100){
        return 0;
    }

    int Aux=0;
    string tests[num_tests];
    char readed_simbol_compu;
    int actual_state, next_state;

    while(Aux < num_tests){
        cin >> tests[Aux];
        Aux++;
    }

    bool accept = false;
    i=0;
    int position=0, Num_String=0, Auxiliar=0;

    while(i < num_tests){
        cout << tests[i] << endl;
        tests[i].erase(0,1);
        tests[i].erase(tests[i].size()-1, tests[i].size());
        actual_state = initial_state;

        while(position < tests[i].size()){
            readed_simbol_compu = tests[i].at(position);
            for(int j = 0; j < num_transitions; j++){
                if(actual_state == exit_state[j]){
                    if(readed_simbol_compu == readed_simbol[j]) {
                        actual_state = arrive_state[j];
                        Auxiliar++;
                        break;
                    }
                }
            }
            position++;
        }

        for(int j=0; j < qtt_finalStates; j++){
            if(actual_state == final_states[j]){
                accept = true;
            }
        }

        if(Auxiliar < tests[i].size() &&  tests[i].size()>0 ){
            accept = false;
        }

        if(accept == true){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }

        i++;
        position=0;
        accept = false;
        Auxiliar=0;
    }

    return 0;
}
