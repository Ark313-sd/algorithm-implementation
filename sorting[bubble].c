#include<stdio.h>
#include<string.h>
void sort(int array[], int size){
	for(int i=0; i<size -1 ; i++){
        for(int j=0; j<size -i -1; j++){ //doesnt let it reach the last value as the last value will be the highest and we want it to stay there
            if(array[j]<array[j+1]){
                int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
}
}
}
}
void print(int array[], int size){
	for(int i=0; i<size;i++){
		printf("%d ", array[i]);
}

}

int main(){
	int array[10]={5,6,3,4,9,1,10,2,8,7};
	int size = (sizeof(array)/sizeof(array[0]));
	sort(array, size);
	print(array , size );

}



