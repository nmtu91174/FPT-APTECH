var hx = document.getElementById("box");
hx.innerText = "Xin chào, tôi thay dữ liệu của box";
hx.innerHTML = "<i>Đổi cả nội dung html bên trong, in nghiêng</i>";
hx.style.color = "green";
hx.style.marginBottom = "20px"; 
hx.classList.remove("xyz"); //xoá class xyz
hx.classList.add("abc"); //thêm class 
hx.classList.add("gik");

//tác động vào thẻ div
var dv = document.getElementById("divice");
dv.style.fontSize = "60px";

//var f=14;
//var d = setInterval(function(){
// dv.style.fontSize = f+"px"
//f+=2;
//},1000); đối tượng tăng dần
 
var fan = document.getElementById("fan");
var dg = 0;

var fanbox = setInterval(function(){
    fan.style.transform = `rotate(${dg}deg)`; //`` dấu này không phải nối chuỗi
    dg+=180;
},1);



/*
- muốn làm gì với id thì khai báo 1 biến thay thế
- tác động đến biến chứa 
- DOM môi trường điều khiển giao diện từ người dùng từ phía javascript
- DOM = Document Oject Model

*/