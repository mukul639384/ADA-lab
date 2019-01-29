#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node * left;
	struct node * right;
};
struct node * insert(struct node *ptr,int val)
{
	if(ptr==NULL)
	{
		ptr=(struct node *)malloc(sizeof(struct node));
		ptr->key=val;
		ptr->left=NULL;
		ptr->right=NULL;
		
	}
	else if(ptr->key<val)
	ptr->right=insert(ptr->right,val);
	else if(ptr->key>val)
	ptr->left=insert(ptr->left,val);
	else
	cout<<"values is already present";
	return ptr;
}
struct node *min(struct node* ptr)
{
	if(ptr==NULL)
	{
		cout<<"BST is empty";
		return NULL;
	}
	else
	{
		while(ptr->left!=NULL)
		ptr=ptr->left;
		return ptr;
	}
}
struct node *max(struct node* ptr)
{
	//struct node *max2=NULL;
	if(ptr==NULL)
	{
		cout<<"BST is empty";
		return NULL;
	}
	else
	{
		while(ptr->right!=NULL)
		{
		//	max2=ptr;
			ptr=ptr->right;
		}
		return ptr;
	}
}
struct node *min2(struct node* ptr)
{
//	struct node *min2=NULL;
	if(ptr==NULL)
	{
		cout<<"BST is empty";
		return NULL;
	}
	else
	{
		while(ptr->left->left!=NULL)
		{
			//min2=ptr;
			ptr=ptr->left;
		}
		//return min2;
		if(ptr->left->right==NULL)
		return ptr;
		else
		return ptr->left->right;
	}
}
struct node *max2(struct node* ptr)
{
	//struct node *max2=NULL;
	if(ptr==NULL)
	{
		cout<<"BST is empty";
		return NULL;
	}
	else
	{
		while(ptr->right->right!=NULL)
		{
			
			ptr=ptr->right;
		//	max2=ptr;
		}
	//	max2=ptr->right->left;
		if(ptr->right->left==NULL)
		
			//if(ptr->key>max2->key)
			return ptr;
			else
			{
				return ptr->right->left;
			}
			
		}
		
		//return max2;
	
}
void inorder(struct node *ptr)
{
	
 	 if(ptr!=NULL)
	  {
	  	inorder(ptr->left);
	  	cout<<ptr->key<<" ";
	  	inorder(ptr->right);
	  }	
	  
}
/*void inordersuccessor(struct node *ptr,int ele,int flag)
{
	
	inordersuccessor(ptr->left)
	
	inordersuccessor()
	
}*/
int main()
{
	struct node *root=NULL;
	struct node *maximum,*minimum,*maximum2,*minimum2;
	cout<<"enter no odf elements in BST"<<endl;
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		root=insert(root,x);
	}
	cout<<"max element in BST"<<endl;
	maximum=max(root);
	cout<<maximum->key<<endl;
	cout<<"2nd max element in BST"<<endl;
	maximum2=max2(root);
	cout<<maximum2->key<<endl;
	cout<<"min element in BST"<<endl;
	minimum=min(root);
	cout<<minimum->key<<endl;
	cout<<"2nd min element in BST"<<endl;
	minimum2=min2(root);
	cout<<minimum2->key<<endl;
	cout<<"inoder traversing:"<<endl;
	inorder(root);
	
	
	
	
}
