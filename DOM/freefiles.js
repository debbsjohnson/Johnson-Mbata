// class selector 
// const btn = document.getElementsByClassName("btn")[0];
// console.log(btn)

//event listener
// btn.addEventListener("click", changeBackground);


// // // function that changes background to black
// function changeBackground(){
//     document.body.style.backgroundColor = "black";
// }

//Id selector 
// const btn = document.getElementById("btn");
// console.log(btn)

// //event listener
// btn.addEventListener("click", changeBackground);


// // // // function that changes background to black
// function changeBackground(){
//     document.body.style.backgroundColor = "black";
// }




//Tag selector 
// const btn = document.getElementsByTagName("button")[0];
// console.log(btn)

// //event listener
//   btn.addEventListener("click", changeBackground);


// // // function that changes background to black
// function changeBackground(){
//     document.body.style.backgroundColor = "black";
// }


//universal selector
const btn = document.querySelector(".btn");
console.log(btn)

//event listener
btn.addEventListener("click", changeBackground);


// // // function that changes background to black
function changeBackground(){
    document.body.style.backgroundColor = "black";
}
