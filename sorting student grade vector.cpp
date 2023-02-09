#include <iostream>
#include <vector>

using namespace std;


int main ()
{
	cout<<" Enter the count of students : ";
   
    int count;
   
    cin>> count;
    
    vector <string> name{count};
	
	vector <int>  grade{grade};    
    
    for (int i=0 ; i<count ; i++)
{
	
	cout<<" Enter student names : "<<endl;

	cin>>name[i];

	cout<<" Enter "<< name[i]<< " Grade : "<<endl;

    cin>>grade[i];
	
}

	for (int i=0  ; i<count ; i++)

{
	
	cout<<endl<<name[i]<<" : "<<grade[i]<<endl;

}



for (int i=0; i<count; i++)
	{
		for (int j=0; j<count - 1; j++)
		{
			if (grade[j] <grade[j+1])
			{
				int temp = grade[j];
				
				grade[j] = grade[j+1];
				
				grade[j+1] = temp;
				
			
			
			
				string t = name[j];
				
				name[j] = name[j+1];
				
				name [j+1] = t;
				
				
			}
			
		}
	}
	
	

    cout<<"sorted grades : ";
    
         for (int i=0 ; i< count ; i++)
         {
	    
		 	cout<<endl<<name[i]<<" : "<<grade[i]<<endl;
}
    
    
    
    return 0;

}


