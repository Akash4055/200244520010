document.getElementById("one").innerHTML="Akash Dhawale";
console.log("Akash Dhawale");
window.alert("Akash Dhawale");      
function highestNum()
                {
                    var a=Number(document.getElementById("first").value);
                    var b=Number(document.getElementById("second").value);
                    var c=Number(document.getElementById("third").value);
                    document.getElementById('high').innerHTML=Math.max(a,b,c);
                }
function fiveTime()
{
    var fnm=String(document.getElementById("nm").value);
    document.getElementById('h1').innerHTML=fnm;
    document.getElementById('h2').innerHTML=fnm;
    document.getElementById('h3').innerHTML=fnm;
    document.getElementById('h4').innerHTML=fnm;
    document.getElementById('h5').innerHTML=fnm;
}        