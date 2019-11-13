//Assignment04, Problem#3
//This code will test a stack data structure.
//There are 5 test cases in this code. Please uncomment the test case you wish to implement

#include <assert.h>
#include "stack.h"

void main(void){
  int result;
  int num = -2;
  
  //Arrange;
  init();       //Initialize the pointer to point to the stack's address
  
  //Test case 1: Check's for an empty stack
  //Action
  result = pop(&num);
  //Assertion
  assert(num == -2);    //Expects the program to pass through
  assert(result == 0);  //Error's out since the pop() function should return -1
  
//  //Test case 2: Full stack
//  //Action
//    result = push(1);     //the push value into a stack
//    assert(result == 0);
//    result = push(2);
//    assert(result == 0);
//    result = push(3);
//    assert(result == 0);
//    result = push(4);
//    assert(result == 0);
//    result = push(5);
//    assert(result == 0);		//It should error here since this is past the limit of the array
//                              //return -1;
//  
//  //Test case 3: push() to full stack and pop() the entire stack
//  //Action   
//    result = push(1);     //the push value into a stack
//  //Assertion
//    assert(result == 0);
//    result = push(2);
//    assert(result == 0);
//    result = push(3);
//    assert(result == 0);
//    result = push(4);
//    assert(result == 0);
//    result = push(5);
//    assert(result == 0);
//    
//  //Action
//    result = pop(&num);   //the pop value out of a stack
//  //Assertion
//    assert(result == 0);
//    assert(num == 5);
//    result = pop(&num);
//    assert(num == 4);
//    assert(result == 0);
//    result = pop(&num);
//    assert(num == 3);
//    assert(result == 0);
//    result = pop(&num);
//    assert(num == 2);
//    assert(result == 0);
//    result = pop(&num);
//    assert(num == 1);
//    assert(result == 0);
//    result = pop(&num);
//    assert(result == 0);      //It should be erroring out here
//    assert(num == 0);
  
//  //Test case 4: push() one, pop() one and check's for an empty stack
//  //Action   
//    result = push(1);     //the push value into a stack
//  //Assertion
//    assert(result == 0);
//  
//  //Action
//    result = pop(&num);   //the pop value out of a stack
//  //Assertion
//    assert(result == 0);
//    assert(num == 1);
//    result = pop(&num);
//    assert(result == 0);  //Error state here.
  
//  //Test case 5: push() value to a  full stack, pop() one value out of the stack, push() one and check for a full stack
//  //Action   
//    result = push(1);     //the push value into the stack
//  //Assertion
//    assert(result == 0);
//    result = push(2);
//    assert(result == 0);
//    result = push(3);
//    assert(result == 0);
//    result = push(4);
//    assert(result == 0);
//  
//  //Action
//    result = pop(&num);   //the pop value out of the stack
//  //Assertion
//    assert(result == 0);
//    assert(num == 4);
//  
//  result = push(5);
//  assert(result == 0);
//  result = push(6);
//  assert(result == 0);        //Error condition here.
}