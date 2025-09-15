/* console.log("Hello World!"); in ra cau hello world*/
var x;
x=10; //x:number
console.log(x);
x = "xin chào";
console.log(x);
x=true;
console.log(x);

var n=20;
var s = "hello";
var t = n + n; //40
var k = n + s; //20hello
var m = s + n; //hello20

if(t>30){
   
}
 else{

 }

 var xyz = t>30?"A":"B" //toán tử 3 ngôi
//  if(t>30){
//     xyz="A";
//  } else {
//     xyz="B";
//  }

for(var i=0;i<10;i++){
    // var ab = "i=";
    // var bc = ab + i;
    // console.log(bc);
    console.log("i"+i);
}

//ARRAY

var arr = []; //coi mảng chỉ là một giá trị

var abc = [1,2,3,"xin chao"]; 

arr[0] = 10;
arr[1] = 15;
arr.push(18); //arr[2] = 18;

//duyệt mảng dùng for

for(var i=0; i<arr.length; i++){
    console.log(arr[i]);
}


//HÀM

function tinhtong(a,b,c){
    //return a+b;
    console.log(a+b+c);

}

tinhtong(5," ",7);
tinhtong("a"," ",8);
tinhtong("b","b",9);
tinhtong([1,2,3]," ",9);

//Hàm có sẵn

// alert("do not eat!");
// confirm("Do you see the alert?"); //return true/false
// var check = confirm("Do you see the alert?");
// if(check == true){
//     alert("oh yes, you saw it");
// } else{
//     alert("Oh no, you didn't see it");
// }

//Hàm prompt

//prompt("How are you?");//hàm trả về string

var age = prompt("How are you?");
age = age + 10;

alert(age); 

//ok mà có điền thì là string
//ok mà không điền thì string rỗng
//cancel giá trị null

age = parseInt(age);

//nhap vào 20 ==> trả về 20
//nhập vào "20ab48" ==> trả về 20 còn cắt hết bỏ đi
//nhập vào "a20" ==> NaN --> not a number vì phát hiện ngay vị trí đầu ko phải số nên bỏ đi

//var lk = Math.random(); //tạo 1 số thực ngẫu nhiên từ 0->1

//nhân với 100, rồi tìm cách cắt phần sau dấu phẩy nếu muốn có số random từ 0->99

var lk = Math.random();
lk = lk * 100;
lk = parseInt(lk);
console.log(lk);

var num = prompt("Bạn chọ số nào?");
num = parseInt(num);
if(num==lk){
    alert("you are damn lucky!");
}else{
    alert("comeback tomorrow!");
}










