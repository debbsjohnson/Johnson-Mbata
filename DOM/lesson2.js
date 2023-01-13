// array to hold names
const names = ["Uche", "Alvin", "Diamond", "Dapo",
 "Jerry", "Emma", "Debbie", "David", "Favour", "Onyx", "Miracle", "Gift"]

 const table = document.getElementById("tab");
 //console.log(table)

 for (let x = 0; x < names.length; x++){
    //create row tag 
    const tr = document.createElement("tr");
    const sn = document.createElement("td");
    const name = document.createElement("td");
    console.log(sn)

    //adding content 
    sn.innerText = x + 1;
    name.innerText = names[x];

    //putting sn(td) and name(td) inside our tr
    tr.appendChild(sn);
    tr.appendChild(name);

    //putting tr inside table
    table.appendChild(tr);
 }