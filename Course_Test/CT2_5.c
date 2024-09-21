// Write a program to find maximum out of three given numbers in a 
// single statement. What are the pros and cons of using this 
// statement?

int main(){
    int a = 10, b = 20, c = 30;
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d", max);
}

//compact statement
//it is confusing