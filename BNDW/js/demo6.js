function forecast(){
    //
    var list = [];// giả sử là danh sách thời tiết
    var box_html = "";
    for(var i=0;i<list.length;i++){
        box_html += `<div class="item">
                        <h1>${list[i].dt_txt}</h1>
                        <h2>Nhiệt độ</h2>
                        <h3>Thông tin</h3>
                        <img src="#"/>
                    </div>`;

    }
    // in vào box bên html
    document.getElementById("box").innerHTML = box_html;
}