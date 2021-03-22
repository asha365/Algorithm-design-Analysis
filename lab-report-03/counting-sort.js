var A = [10,1,6,8,12,20];
var C = [];
var B = [];

//Given that 
console.log('1');
console.log("Enter how many numbers you want to insert: 6");
console.log("Enter the numbers: 10 1 6 8 12 20");

//Menu section
console.log(".............Menu...............");
console.log("Press 1 for ascending order sorting");
console.log("Press 2 for descending order sorting");

//Choice section
var choice = prompt("Enter your choice:");
console.log("Enter your choice:"+ choice);

//counting sort for ascending order sorting
if(choice == 1){
    for(var i = 0; i<=20; i++){
        C[i] = 0;
    }
    for(var j = 0; j<6; j++){
        C[A[j]] = C[A[j]] + 1;
    }
    for(var i = 1; i<=20; i++){
        C[i] = C[i] + C[i-1];
    }
    for(var j = 5; j>= 0; j--){
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    //output section
    console.log("Sorted list in ascending order:");
        for(var i = 1; i<=6; i++){
            console.log(B[i]);
        }
    }