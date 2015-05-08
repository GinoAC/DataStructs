/*
Author: Gino C.
Last Modified: 5/8/2015
Class: Implementation of a single linked list data structure

addFirst - adds element to front of list
addLast - adds element to end of list
insert - inserts element at index
poll - removes first element and returns it
remove - removes indexed element and returns it
removeLast - removes last element and returns it
peek - returns first element but does NOT remove it
get - returns element at location without removing it
size - returns size of the list
 */

package datastructuresimplemented;

import java.util.HashSet;
import java.util.Set;

public class GCSingleLinkedList<E> {
    //Need a leading node to start with
    private Node<E> head = null;
    private int size = 0;
   
    public GCSingleLinkedList(){
        
    }
    
    //adds element to front of the list
    public void addFirst(E dataObject){
        head = new Node<>(dataObject,head);
        size++;
    }
    
    //Not very efficient, would be more efficient to keep track of the last element
    //adds an element to the end of the list
    public void addLast(E dataObject){
        Node<E> temp;
        temp = head;
        //Goes through until the end of the list and then adds to it
        while(temp.getNext() != null){
            temp = temp.getNext();
        }
        temp.setNext(new Node<>(dataObject));
        size++;
    }
    
    public void insert(int index,E dataObject){
        Node<E> temp;
        temp = head;
        Node<E> newNode = new Node(dataObject);
        int loc = 0;
        
        //Checks if its in the bounds of the list.        
        if(index < 0 || index > size){
            throw new IndexOutOfBoundsException(Integer.toString(index));
        }
        
        //If adding to front, call method already made
        if(index == 0){
            addFirst(dataObject);
        }else if(index == size-1){
        //If adding to end, call method already made
            addLast(dataObject);
        }else{
            //else get to the node before the index 
            while(loc != index-1){
                temp = temp.getNext();
                loc++;
            }
            //Set the current indexed node to the new indexed node's nextNode
            newNode.setNext(temp.getNext());
            //Set the node before the indexed node to point to the new node
            temp.setNext(newNode);
            size++;
        }      
    }

    public E poll(){
        //Get the head
        Node<E> temp = head;
        //if head isn't null, get the next node and place it as the head
        if(head!=null){
            head = head.getNext();
        }
        //if the head wasn't null
        if(temp!=null){
            //decrease the size of the linked 
            size--;
            //and return the data that was at the head
            return temp.getData();
        }else{
            return null;
        }
    }
    
    //Removes last element and returns it
    public E removeLast(){
        E rData = null;
        Node <E> temp = head;
        Node <E> last;
        int i = 0;
        if(size == 1){
            rData = poll();
        }else{
            while(i < size-2){
                temp = temp.getNext();
                i++;
            }
            last = temp.getNext();
            temp.setNext(null);
            rData = last.getData();    
            size--;
        }
        return rData;
    }
    
    public E remove(int index){
        E rData = null;
        int loc = 0;
        Node <E> temp = head;
        Node <E> target;
        if(index < 0 || index > size){
            throw new IndexOutOfBoundsException(Integer.toString(index));
        }
        //If index is 0 or the size of the list, it uses already made methods
        if(index == 0){
            rData = poll();
        }else if(index == size-1){
            rData = removeLast();
        }else{
         //Goes to index, and removes that indexed node
            while(loc != index-1){
                temp = temp.getNext();
                loc++;
            }
            target = temp.getNext();
            temp.setNext(target.getNext());
            rData = target.getData();
            size--;
        }
        return rData; 
    }
            
    
    //Returns item at index in list
    public E get(int index){
        E rData = null;
        Node<E> temp = head;
        int loc = 0;
        //Checks if its in the bounds of the list.
        if(index < 0 || index > size){
            throw new IndexOutOfBoundsException(Integer.toString(index));
        }
        
        //Goes to index, and gets data at that indexed node
        while(loc != index){
            temp = temp.getNext();
            loc++;
        }
        rData = temp.getData();
        return rData;
    }
       
    
    public E peek(){
        //If the head is not null then get and return its data
        if(head != null){
            return head.getData();        
        //if head is null return null
        }else{
            return null;
        }   
    }
    
    public int size(){
        return size;
    }
    
}