//Question : https://www.naukri.com/code360/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan

#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this-> next =next;   
    }

    ~Node(){
        if(this->next == NULL){
            delete next ;
            next = NULL;
        }
    }
};

// Approach 1 - Can't find loop 
bool isCircularList(Node* head){
    if(head==NULL){
        return true;
    }

    Node* temp = head;

    while(temp==NULL && temp!=head){
        temp = temp->next;
    }

    if(temp==head)
        return true;

    else if(temp==NULL)
        return false;
}


//Approach 2 
bool isCircular(Node* head){
    map<Node* ,bool> visited;

    while(head!=NULL && visited[head]==false){
        visited[head] = true;
        head = head->next;
    }
    if(head==NULL)
        return false;
    return true;
}