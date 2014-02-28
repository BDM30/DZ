#include "myarraystack.h"
#include <iostream>

MyArrayStack::MyArrayStack()
{
    elements = new int[defaultMaxSize];
    currentSize = 0;
}

MyArrayStack::~MyArrayStack()
{
    delete elements;
}

MyArrayStack::MyArrayStack(int initSize)
{
    maxSize = initSize;
    elements = new int[initSize];
    currentSize = 0;
}

void MyArrayStack::push(int el)
{
    if (currentSize == maxSize)
    {
        std::cout << "Error: Stack is full!" << std::endl;
        exit(0);
    }
    else
    {
        elements[currentSize] = el;
        currentSize++;
    }
}

int MyArrayStack::pop()
{
    if (currentSize == 0)
    {
        std::cout << "Error: Stack is empty!" << std::endl;
        exit(0);
    }
    else
    {
        currentSize--;
        return elements[currentSize];
    }
}

int MyArrayStack::back()
{
    if (currentSize == 0)
    {
        std::cout << "Error: Stack is empty!" << std::endl;
        exit(0);
    }
    else
    {
        return elements[currentSize-1];
    }
}

int MyArrayStack::size()
{
    return currentSize;
}

bool MyArrayStack::isEmpty()
{
    return (currentSize == 0);
}

void MyArrayStack::clear()
{
    currentSize = 0;
}

void MyArrayStack::printStack()
{
    for (int i = 0; i < currentSize; i++)
    {
       std::cout << elements[i] << " | ";
    }
    std::cout << std::endl;
}
