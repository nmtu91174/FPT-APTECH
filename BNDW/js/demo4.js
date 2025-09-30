// var sp = {

//     name: "iphone 17 air",
//     price: 32000000,
//     image: "image/graphic13-1.svg",
//     description: "dòng sản phẩm air mới có ở bản 17",
//     stock: {
//         qty: 9
//     },

//     reviews: [
//         {
//             rate: 5,
//             review: "nhin dep ok"
//         },
//         {
//             rate: 4,
//             review: "cung ok"
//         }
//     ]
// }

//lấy được dữ liệu về
//REST API: theo chuẩn 
//url trả về json
// //Quá trình lấy về thuật ngữ là CALL API

// const url = `/data/product`
//lấy dữ liệu về, chuyển thành json, lấy dữ liệu phải chờ rồi làm tiếp

const url = `http://127.0.0.1:5500/data/product.json`;
fetch(url).then(rs=>rs.json())
.then(function(data){

    //nơi sử dụng dữ liệu đưa ra giao diện
    var sp = data;

    var spname = document.getElementById("p-name");
    spname.innerText = sp.name

    document.getElementById("p-price").innerText = sp.price;
    document.getElementById("p-image").src = sp.image;
    document.getElementById("p-desc").innerText = sp.description;
    document.getElementById("p-qty").innerText = sp.stock.qty;

    var rvhtml = "";
    for(var i=0;i<sp.reviews.length;i++){
        var rate = sp.reviews[i].rate;
        var review = sp.reviews[i].review;

        rvhtml += `<li>${rate} sao - ${review}</li>`;

        // rvhtml = rvhtml + `<li>${sp.reviews[i].rate} sao - ${sp.reviews[i].rate}</li>`
    }

    document.getElementById("rv").innerHTML = rvhtml;

});



//sử dụng dữ liệu, khác nhau cho mỗi dữ liệu khác nhau
// var sp = 

// var spname = document.getElementById("p-name");
// spname.innerText = sp.name

// document.getElementById("p-price").innerText = sp.price;
// document.getElementById("p-image").src = sp.image;
// document.getElementById("p-desc").innerText = sp.description;
// document.getElementById("p-qty").innerText = sp.stock.qty;

// var rvhtml = "";
// for(var i=0;i<sp.reviews.length;i++){
//     var rate = sp.reviews[i].rate;
//     var review = sp.reviews[i].review;

//     rvhtml += `<li>${rate} sao - ${review}</li>`;

//     // rvhtml = rvhtml + `<li>${sp.reviews[i].rate} sao - ${sp.reviews[i].rate}</li>`
// }

// document.getElementById("rv").innerHTML = rvhtml;
    

//object nằm trong dấu ngoặc nhọn, dữ liệu tổng hợp
//key: value
//thông qua key và object.key
//nếu dùng nhiều lần đặt biến
//src muốn đưa ảnh
//cấu trúc dữ liệu nhìn vào dấu ngoặc nhọn đầu tiên
/*
//là một nguồn dữ liệu độc lập
//viết ra cấu trúc dữ liệu
//bên json phải nháy kép
//một tiêu chuẩn của định nghĩa dữ liệu
//không phải ngôn ngữ lập trình

*/