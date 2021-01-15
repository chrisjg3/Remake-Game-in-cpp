const canvas = document.getElementById("canvas");
const context = document.getElementById("canvas").getContext("2d");

function drawPlanet(x, y, color, size, correction)
{
// draw orbit
context.beginPath();
context.moveTo(1800, 1200);
context.arc(1800,1200,2000-Math.sqrt(x*x+y*y)+correction,0,2*Math.PI); // poorly done math, but now it stays
context.stroke();
// actual planet
context.beginPath();
context.moveTo(x, y);
context.arc(x,y, size,0,2*Math.PI);
context.stroke();
context.fillStyle = color;
context.fill();

}


// Sun **
context.beginPath();
context.moveTo(1800, 1200);
context.arc(1800,1200,1000,0,2*Math.PI);
context.stroke();
context.fillStyle = "orange"
context.fill();
// ** //

// Planets **
drawPlanet(400, 400, "red", 20, 180); // planet a
drawPlanet(200, 200, "blue", 20, 170); // planet b
// ** //

// drawPlanet(100, 100, "green", 30, 160) // test and hypotheical extra planet