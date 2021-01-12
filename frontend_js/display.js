const canvas = document.getElementById("canvas");
const context = document.getElementById("canvas").getContext("2d");

function drawHex(ctx, size, Xcenter, Ycenter, color) // code for specific hex drawing
{
    const numberOfSides = 6;

    ctx.beginPath();
    ctx.moveTo (Xcenter +  size * Math.cos(0), Ycenter +  size *  Math.sin(0)); 
            
    for (var i = 1; i <= numberOfSides;i += 1) {
    ctx.lineTo (Xcenter + size * Math.cos(i * 2 * Math.PI / numberOfSides), Ycenter + size * Math.sin(i * 2 * Math.PI / numberOfSides));
    }

    ctx.strokeStyle = "#000000";
    ctx.lineWidth = 1;
    ctx.stroke();
    ctx.fillStyle = color;
    ctx.fill();
}

let ownership_arry = ['silver', 'silver', 'silver', 'silver', 'silver', 'silver', 'silver'];

function redrawBoard(context, ownArr) // code for re-rendering the board
{
    // top layer
    drawHex(context, 20, 256, 207, ownArr[0]);

    // next layer
    drawHex(context, 20, 225, 225, ownArr[1]);
    drawHex(context, 20, 288, 226, ownArr[2]);

    // next
    drawHex(context, 20, 256, 244, ownArr[3]);

    // next
    drawHex(context, 20, 287, 263, ownArr[4]);
    drawHex(context, 20, 224, 262, ownArr[5]);

    // last layer
    drawHex(context, 20, 256, 281, ownArr[6]);

}

let done = false;
redrawBoard(context, ownership_arry);

ownership_arry[0] = "red";
let i = 0;

while(!done)
{
    prompt("Test?");
    redrawBoard(context, ownership_arry);
    i += 1;
    if(i > 2) { done = true; }
}
