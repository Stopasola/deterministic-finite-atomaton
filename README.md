# Deterministic Finite Automaton

> Status: Developed ✔️

### A program that simulate deterministic finite automaton

It simulates the behavior of the deterministic finite automaton given a number of states and the alphabet.

## Simulation of deterministic finite automaton

A deterministic finite automaton simulator was implemented, which receives the formal
specification of an automaton and then a sequence of strings. It must simulate the execution
of the automaton for each chain and respond with "S" if the chain is accepted, or with "N"
if the chain is not accepted.

## Input
- The first input line will contain the alphabet (represented by $\sum$), which must consist only
of digits (0 to 9), lowercase letters (a to z), and underscore ( _ ).
- The second line will contain an integer Q (1 ≤ Q ≤ 10) indicating the number of states of the automaton.
The states must be numbered sequentially from 1 to Q.
- The third line will contain a single integer S, indicating the initial state.
- The fourth line will contain from 1 to at most Q integers, separated by spaces, indicating the final states of the automaton.
- The fifth line will contain an integer D (1 ≤ D ≤ Q x |�|) that indicates the number of transitions 1 of the automaton.

The following D lines will contain the automaton transitions, one per line, in the form “Qi s Qj” that 
indicate the current state, the read symbol and the next state, respectively.
After the transitions there will be a line with an integer N (1 ≤ N ≤ 100) that will indicate 
the number of test strings. The length of each string will not exceed 200 characters.
The next N lines will contain the strings to be analyzed. The strings will be enclosed between two '@' symbols. 
Two '@' symbols in a row will indicate an empty string.

## Output
For each string to be analyzed, the simulator must print two lines of data: the original string on the first 
line and the automaton response on the second line.

## Example

Input

01
2
1
1 2
3
1 0 1
1 1 2
2 1 2
10
@@
@0@
@1@
@00@
@01@
@10@
@11@
@000@
@001@
@010@

Output

@@
S
@0@
S
@1@
S
@00@
S
@01@
S
@10@
N
@11@
S
@000@
S
@001@
S
@010@
N

## Technologies Used:
[C++](https://www.cplusplus.com)
