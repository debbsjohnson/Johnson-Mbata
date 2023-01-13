const container1 = document.querySelector(".container");

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