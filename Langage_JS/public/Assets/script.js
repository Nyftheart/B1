const imageElement = document.querySelector('.data-image');

let form = document.querySelector('.form');

btn = document.querySelector("button");
btn.addEventListener("click", sendData);

function sendData(event){   
    let formData = {}    
    for (let i = 0 ; i < form.querySelectorAll('input').length ; i++){
    
        formData[form.querySelectorAll('input')[i].name] = form.querySelectorAll('input')[i].value;
    }
    console.log(formData);
    
    getSatelliteImage(formData)

    event.preventDefault();
}


function getSatelliteImage(formData)
{
    let api_key = "RnBkehqI2FRxLKYUqIwiaXG7F9KC0s3fbZ70SC5L";
    
    let api_param = "lon="+formData.lon+"&lat="+formData.lat;
    
    console.log(api_param);
    
    nasaUrl = "https://api.nasa.gov/planetary/earth/imagery?" + api_param + "&api_key=" + api_key;
    console.log(nasaUrl);
    
    fetch(nasaUrl)
        .then(response => response.json())
        .then(data => {
            console.dir(data);
            imageElement.src = data.url;
     });

}