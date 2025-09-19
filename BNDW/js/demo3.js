function demoOne(){
    alert("one two three ... ");
}

function demoTwo(){
    alert("demo to two");
}

function fanRotate() {
    var fan = document.getElementById("fan");
    var dg = 0;

    var fanbox = setInterval(function(){
    fan.style.transform = `rotate(${dg}deg)`; //`` dấu này không phải nối chuỗi
    dg+=180;
    },1);

    var btn = document.getElementById("btn-fan");
    btn.innerText = "Stop";
    
}


/* Cần có giao diện đặt các kích hoạt sự kiện
- input bàn phím và chuột
- chuột button và bàn phím