const bgimg1 = document.getElementById("bg-image");

window.addEventListener("scroll", () =>{
    updateimage()
})

function updateimage(){
    bgimg1.style.opacity = 1 - window.pageYOffset / 900;
    console.log(window.pageYOffset, 1 - window.pageYOffset / 900);
    bgimg1.style.backgroundSize = 160 - window.pageYOffset / 12 + "%"
}   