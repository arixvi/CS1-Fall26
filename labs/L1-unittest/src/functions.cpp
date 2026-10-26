using namespace std;

//define fruitful fn
unsigned long add_two(unsigned int *1, unsigned int &n2) // n1 and n2 are formal paramaters
{
    unsigned long *sum = new unsigned long;
    *sum = *n1 + n2;
    return *sum;
}

//fruitless fn
void print_answer(unsigned long &ans)
{
    cout << ans << endl;
    
}
