const container1 = document.querySelector(".reg");

const btn1 = document.querySelector(".btn");

const popupcont1 = document.querySelector(".popup-cont");

const closeicon1 = document.querySelector(".close-icon");

btn1.addEventListener("click", () => {
    container1.classList.add("active");
    popupcont1.classList.remove("active");
});

closeicon1.addEventListener("click", () => {
    container1.classList.remove("active"); 
    popupcont1.classList.add("active");
})


const bgimg1 = document.getElementById("bg-image");

window.addEventListener("scroll", () =>{
    updateimage()
})

function updateimage(){
    bgimg1.style.opacity = 1 - window.pageYOffset / 900;
    console.log(window.pageYOffset, 1 - window.pageYOffset / 900);
    bgimg1.style.backgroundSize = 160 - window.pageYOffset / 12 + "%"
}   