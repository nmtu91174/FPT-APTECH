function forecast(data) {
    const url = `https://api.openweathermap.org/data/2.5/forecast?q=${data}&appid=YOUR_API_KEY&units=metric`;

    fetch(url)
        .then(response => response.json())
        .then(data => {
            let forecastHTML = '';
            data.list.forEach(item => {
                forecastHTML += `
                    <div class="col-12 col-md-6 col-xl-3 mt-3">