/*
Kevin Huang
Lab 3, string and string methods
Sep 8, 2025
*/

#include<iostream>
#include<string>

using namespace std;

int main (){
    cout<<"\n ------ Example 1: string indexing ------"<<endl;
    string first_name = "Peter"; 
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name .at(0)<<endl;

    cout<<"\n ------ Example 2: amount of chracter in a string ------"<<endl;
    int characters = first_name.length();
    cout<<"There is "<<characters<<" characters/s in " <<first_name<<endl;
    
    cout<<"\n ------ Example 3: concatenate chracter/s in a string ------"<<endl;
    string last_name ="Pan";
    string username = "PP123";
    cout<<"concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n ------ Example 4: subtracting chracters in a string ------"<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 character from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted characters = "<<subst_char<<endl;

    cout<<"\n ------ Example 5: inserting characters in a string ------"<<endl;
    // insert the word "maybe"
    msg.insert(5, " maybe");
    cout<<"After insert method = "<<msg<<endl;

    cout<<"\n ------ Example 6: inserting characters to the end of in a string ------"<<endl;
    msg.append(" -- by Huang");
    cout<<"After append method = "<<msg<<endl;

    cout<<"\n ------ Example 7: replacing characters in a string ------"<<endl;
    msg.replace(17,9, "bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n ------ Example 8: erasing characters from a string ------"<<endl;
    msg.erase(0,5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n ------ Example 9: finding characters in a string ------"<<endl;
    // find method returns the index number of the first found
    // if the character was not found, it returns -1
    // find the word 'Huang'
    int index_huang = msg.find("Huang");
    cout<<"The index of Huang = "<<index_huang<<endl;
    cout<<"After find method = "<<msg<<endl;

    cout<<"\n ------ Exercise ------"<<endl;
    string word;
    cout<<"Enter a message = "<<word<<endl;
    cin>>word;
    //I used the word "College"
    cout<<"2nd character: "<<word[1]<<endl;
    int words = word.length();
    cout<<"word has: "<<words<<" characters"<<endl;
    cout<<"Replace word: "<<word.replace(2,2, "--$--")<<endl;
    cout<<"Remove end characters: "<<word.substr(7,3)<<endl;
    //I didn't know how to refer to the last character of ANY word/message so I had to manually count the amount of characters in the word "College" so I could refer to the index and remove the last 3 characters
    //Let's say I typed the word Colleges, then the last three letters would still be "ege"  instead of "ges". How can refer to the last index of any word/message and remove the last 3 characters more efficently?
    
    return 0;
}
