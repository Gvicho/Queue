#pragma once

#include<cstddef>

template<typename T>class queue{
    private:
    template<typename t> struct node{
        t Value;
        node<t> *next, *last;
    };
    node<T> *Head,*Back;
    int Queue_Size=0;
    public:
    queue();
    ~queue();
    void push_back(T);
    void pop();
    int size();
    bool empty();
    T head();
};
