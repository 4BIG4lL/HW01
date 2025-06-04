#include <iostream>

using namespace std;

//배열을 인자로 넘겨 받아서 합을 구하는 함수
int calculateSum(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    return result;
}

//배열을 인자로 넘겨 받아서 평균을 구하는 함수
int calculateAverage(int arr[], int size) {
    int result = 0;
    int sum = calculateSum(arr, size);
    return result = sum / size;
}

//오름차순 정렬 함수 구현
void sortAscend(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
//내림차순 정렬 함수 구현
void sortDecend(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    
    const int SIZE = 5;
    int arr[SIZE];
    //int sum = 0;
    //double average = 0;
    
    //01. 사용자로부터 5개의 숫자를 입력 받습니다.
    cout << "5개의 정수를 입력 : " << endl;

    for (int i = 0; i < SIZE; i++) {
        //02. 입력 받은 숫자를 배열에 저장합니다.
        cin >> arr[i];
    }
    cout << endl;

    //06. 위에서 만든 합계 함수와 평균 함수를 호출
    int sum = calculateSum(arr, SIZE);
    int average = calculateAverage(arr, SIZE);


    //03. 배열에 저장된 숫자들의 합계와 평균을 계산합니다.
    //for (int i = 0; i < SIZE; i++) {
    //    sum += arr[i];
    //}

    //average = sum / SIZE;

    //04. 계산된 합계와 평균을 출력합니다.
    cout << "합계 : " << sum << endl;
    cout << "평균 : " << average << endl << endl;

    int mode;

    cout << "정렬 방법 결정 ( [1]오름차순  [2]내림차순 ) : ";
    cin >> mode;

    //08. 숫자 1을 입력 받으면 오름차순 정렬, 숫자 2를 입력 받으면 내림차순 정렬 구현
    //07-1. 정렬 오름차순
    //if (mode == 1) {
    //    for (int i = 0; i < SIZE - 1; i++) {
    //        for (int j = 0; j < SIZE - 1 - i; j++) {
    //            if (arr[j] > arr[j + 1]) {
    //                int temp = arr[j];
    //                arr[j] = arr[j + 1];
    //                arr[j + 1] = temp;
    //            }
    //        }
    //    }
    //}
    
    //07-2. 정렬 내림차순
    //if (mode == 2) {
    //    for (int i = 0; i < SIZE - 1; i++) {
    //        for (int j = 0; j < SIZE - 1 - i; j++) {
    //            if (arr[j] < arr[j + 1]) {
    //                int temp = arr[j];
    //                arr[j] = arr[j + 1];
    //                arr[j + 1] = temp;
    //            }
    //        }
    //    }
    //}

    if (mode == 1)
        sortAscend(arr, SIZE);
    else if (mode == 2)
        sortDecend(arr, SIZE);
    else
        cout << "올바른 정렬 방식을 선택해주세요." << endl;

    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << endl;


    return 0;
}
