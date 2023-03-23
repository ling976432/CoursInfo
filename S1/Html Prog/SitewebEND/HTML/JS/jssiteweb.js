 //holds the player score
function Result()
{
  var a =true;
  let playerScore = 0 
  if (document.getElementById('q1b').checked === true) {
    playerScore +=playerScore+0.5;
    
  }
  if (document.getElementById('q1d').checked === true) {
    playerScore +=playerScore+1;
    
  }

if (document.getElementById('q2c').checked === true) {
  playerScore +=playerScore+1;
  
}

if (document.getElementById('q3a') === true) {
  playerScore +=playerScore+1;
  
}
if (document.getElementById('q3c') === true) {
  playerScore=playerScore+2;
}


//chech if all question have been well answered.
if (document.getElementById('q1a').checked === false && document.getElementById('q1b').checked  === false && document.getElementById('q1c').checked  === false && document.getElementById('q1d').checked  == false) {
  document.getElementById('question1').style.color = "red";
  a=false;
  document.getElementById('result').innerHTML="You forgot to answer the question 1";
  clearTimeout();
}
else{
  document.getElementById('question1').style.color = "black";
  document.getElementById('result').innerHTML=null;
}


if (document.getElementById('q2a').checked  === false && document.getElementById('q2b').checked  === false && document.getElementById('q2c').checked  === false ) {
  document.getElementById('question2').style.color = "red";
  a=false;
  document.getElementById('result1').innerHTML="You forgot to answer the question 2";
  clearTimeout();
}
else{
  document.getElementById('question2').style.color = "black";
  document.getElementById('result1').innerHTML=null;
}


if (document.getElementById('wrong').selected  === true ) {
   a = false;
  document.getElementById('question3').style.color = "red";
  document.getElementById('result2').innerHTML="You forgot to answer the question 3";
  var timer = setInterval(FUNCTION, 1000);
  clearInterval(timer);
}
else{
    if(a){//affichage resultat 
      document.getElementById('question3').style.color = "black";
      document.getElementById('result2').innerHTML=null;


      if (playerScore===5) {
        document.getElementById('result').innerHTML=" Votre Score est";
        document.getElementById('result1').innerHTML= playerScore;
        document.getElementById('result2').innerHTML= "u r the best guy out there";
       }

      if (playerScore===4) {
        document.getElementById('result').innerHTML=" Votre Score est";
        document.getElementById('result1').innerHTML= playerScore;
        document.getElementById('result2').innerHTML= "u r a very good guy";
      }
      if (playerScore===3) {
        document.getElementById('result').innerHTML=" Votre Score est";
        document.getElementById('result1').innerHTML= playerScore;
        document.getElementById('result2').innerHTML= "I mean, you're decent";
      }
      if (playerScore===2) {
      document.getElementById('result').innerHTML=" Votre Score est";
      document.getElementById('result1').innerHTML= playerScore;
      document.getElementById('result2').innerHTML= "I mean, you're decent";
}
      if (playerScore<2) {
document.getElementById('result').innerHTML=" Votre Score est";
document.getElementById('result1').innerHTML= playerScore;
document.getElementById('result2').innerHTML= "yeah even I is sad for u, u r so bad..";
}
}

}
}
  

//show image for after answering the quiz
  function show_image(src, width, height, alt) {
    
      
      var img = document.createElement("img");
      img.src = src;
      img.width = width;
      img.height = height;
      img.alt = alt;
   // }
  // This next line will just add it to the <body> tag
  document.body.appendChild(img); 
  }




  function myFunction() {
  var x = document.getElementById("myTopnav");
  if (x.className === "w3-top") {
    x.className += "responsive";
  } else {
    x.className = "w3-top";
  }
}
//responsive site even when the sidebar is opened
  function openNav() {
    document.getElementById("mySidenav").style.width = "150px";
    document.getElementById("main1").style.marginRight = "150px";
    document.getElementById("main2").style.marginRight = "150px";
  }
  
  function closeNav() {
    document.getElementById("mySidenav").style.width = "0";
    document.getElementById("main1").style.marginRight= "0";
    document.getElementById("main2").style.marginRight= "0";
  
  }
  //reset quiz
  function Refresh() 
{
  window.location.replace("QuiZpinguine.html");
  document.querySelector('#main2').scrollIntoView({
  behavior: 'smooth'
  });
  //location.href="#main2";
  //document.getElementById("myButton").click(); 
}
//get you the quiz
function Gotoquiz(){
  
  document.querySelector('#main2').scrollIntoView({
    behavior: 'smooth'
  });
}


//animation when you turn on the switch to get a side navbar
function OnclickSwitch() {
  if (
    document.getElementById("menuslide1").classList.contains("slide_2") == true
  ) {
    
     document.getElementById("divswitch").classList.remove("slide_switch"); 
    document.getElementById("menuslide1").classList.remove("slide_2");
    document.getElementById("menuslide2").classList.remove("slide_2");
    document.getElementById("menuslide3").classList.remove("slide_2");
    document.getElementById("icon").classList.remove("iconclass");
    document.getElementById("icon").classList.add("icon");
    

  } else {
    document.getElementById("menuslide1").classList.add("slide_2");
    document.getElementById("menuslide2").classList.add("slide_2");
    document.getElementById("menuslide3").classList.add("slide_2");
    document.getElementById("divswitch").classList.add("slide_switch");
    document.getElementById("icon").classList.remove("icon");
    document.getElementById("icon").classList.add("iconclass");
   
     
    
  };
};
  
  
