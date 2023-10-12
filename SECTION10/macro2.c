
#define PI        3.1415
#define ARR_SIZE  10

int main(void)
{
    double r    = 2.5;
    double area = PI * r * r;

//#undef ARR_SIZE 

    int score[ARR_SIZE] = {0};
    
    for ( int i = 0; i < ARR_SIZE; i++)
    {
        scanf("%d", &score[i]);
    }        
    
    return 0;
}