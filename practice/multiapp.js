const num1 = Math.ceil(Math.random()*10);
const num2 = Math.ceil(Math.random()*10);

const quest = document.getElementById("question");

const input1 = document.getElementById("input");

const form1 = document.getElementById("form");

const scoreE1 = document.getElementById("score")
let score = JSON.parse(localStorage.getItem("score"));

if(!score){
    score = 0;
}

scoreE1.innerText = `score: ${score}`

quest.innerText = `What is ${num1} multiplied by ${num2}?`;

const ans = num1 * num2;

form1.addEventListener("submit", ()=>{
    const userans = +input1.value;
    if (userans === ans){
        score++;
        updatelocalstorage();
    } else {
        score--;
        updatelocalstorage() ;
    }
});

function updatelocalstorage(){
    localStorage.setItem("score", JSON.stringify(score))
}



