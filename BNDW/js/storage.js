var user = {
    name: "John",
    email: "john@gmail.com",
    age: 30,
    address: "123 Main St, City, Country"
}

var strUser = JSON.stringify(user); //biến object thành chuỗi
// Lưu vào localStorage
localStorage.setItem("user", JSON.stringify(user));
