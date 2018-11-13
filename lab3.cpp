//  Jack Kichula
//  Test File for Tree Lab

#include "ItemType.h"
#include "TreeType.h"



int main(){

    TreeType firstTree;
    TreeType newTree;    

    ItemType x;    
    ItemType r;

    r.Initialize('F');
    firstTree.InsertItem(r);
    if (firstTree.IsEmpty() == false)
       cout<<"the first item is inserted"<<endl;

    cout<<"After inserting the first item "<<x<<" into the tree"<<endl;
    firstTree.Print();

    x.Initialize('A');
    firstTree.InsertItem(x);
    x.Initialize('C');
    firstTree.InsertItem(x);
    x.Initialize('B');
    firstTree.InsertItem(x);
    x.Initialize('E');
    firstTree.InsertItem(x);
    x.Initialize('G');
    firstTree.InsertItem(x);
    x.Initialize('X');
    firstTree.InsertItem(x);
    x.Initialize('Z');
    firstTree.InsertItem(x);
    x.Initialize('U');
    firstTree.InsertItem(x);


    cout<<"After inserting five items into the tree"<<endl;
    firstTree.Print();


	// Ancestors Test
	cout << endl;
	cout << "Ancestor Test" << endl;
        firstTree.Ancestors(r);
	cout << endl;

	// Leaf Count Test
	cout << "Leaf Count Test" << endl;
	int leaves = firstTree.LeafCount();
	cout << "The tree has " << leaves << " leaves." << endl;
	cout << endl;

    int count = firstTree.GetLength();
    cout<<"The tree has "<<count<<"  elements"<<endl;
    cout << endl;

    cout << "The new tree is: " << endl;
    firstTree.Swap(newTree);
    newTree.Print();
    cout << endl;

    if (count !=0)
    {
        cout<<"Show the tree in Post_order"<<endl;
        firstTree.ResetTree(POST_ORDER);
        bool finished = false;

        while(finished == false)
       {
         ItemType thisItem;
         firstTree.GetNextItem(thisItem, POST_ORDER, finished);
         cout<<thisItem<<"  ";         
       }    
       cout<<endl;

        cout<<"Show the tree in Pre_order"<<endl;
        firstTree.ResetTree(PRE_ORDER);
        finished = false;
        while(finished == false)
        {

         ItemType thisItem;
         firstTree.GetNextItem(thisItem, PRE_ORDER, finished);
         cout<<thisItem<<"  ";         
        }    
        cout<<endl;

        cout<<"Delete an item : "<<r<<endl;       

        bool find = false;
        firstTree.RetrieveItem(r,find);
        if ( find == true)
            firstTree.DeleteItem(r);

        cout<<"After deleting "<<r<<" from the tree"<<endl;
        count = firstTree.GetLength();
        cout<<"The tree has "<<count<<" elements"<<endl;
        firstTree.Print();
	
    }
    
    firstTree.MakeEmpty();
    cout<<"After empty the tree"<<endl;
    firstTree.Print();


    


    return 0;
}

/* output

[@storm week7]$ ./test.out
the first item is inserted
After inserting the first item F into the tree
Binary Search Tree: (in-order)
F  
After inserting five items into the tree
Binary Search Tree: (in-order)
A  B  C  E  F  
The tree has 5  elements
Show the tree in Post_order
B  E  C  A  F  
Show the tree in Pre_order
F  A  C  B  E  
Delete an item : E
After deleting E from the tree
The tree has 4 elements
Binary Search Tree: (in-order)
A  B  C  F  
After empty the tree
Binary Search Tree: (in-order)



*/
