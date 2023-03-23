//holds the player score

//const delay = d => new Promise(resolve => setTimeout(() => resolve(1), d));
function Result() {
  var a = true;
  let playerScore = 0;
  if (document.getElementById("q1b").checked === true) {
    playerScore += playerScore + 0.5;
  }
  if (document.getElementById("q1d").checked === true) {
    playerScore += playerScore + 1;
  }

  if (document.getElementById("q2c").checked === true) {
    playerScore += playerScore + 1;
  }

  if (document.getElementById("q3a") === true) {
    playerScore += playerScore + 1;
  }
  if (document.getElementById("q3c") === true) {
    playerScore = playerScore + 2;
  }

  if (
    document.getElementById("q1a").checked === false &&
    document.getElementById("q1b").checked === false &&
    document.getElementById("q1c").checked === false &&
    document.getElementById("q1d").checked == false
  ) {
    document.getElementById("question1").style.color = "red";
    a = false;
    document.getElementById("result").innerHTML =
      "You forgot to answer the question 1";
    clearTimeout();
  } else {
    document.getElementById("question1").style.color = "black";
    document.getElementById("result").innerHTML = null;
  }

  if (
    document.getElementById("q2a").checked === false &&
    document.getElementById("q2b").checked === false &&
    document.getElementById("q2c").checked === false
  ) {
    document.getElementById("question2").style.color = "red";
    a = false;
    document.getElementById("result1").innerHTML =
      "You forgot to answer the question 2";
    clearTimeout();
  } else {
    document.getElementById("question2").style.color = "black";
    document.getElementById("result1").innerHTML = null;
  }

  if (document.getElementById("wrong").selected === true) {
    a = false;
    document.getElementById("question3").style.color = "red";
    document.getElementById("result2").innerHTML =
      "You forgot to answer the question 3";
    var timer = setInterval(FUNCTION, 1000);
    clearInterval(timer);
  } else {
    if (a) {
      document.getElementById("question3").style.color = "black";
      document.getElementById("result2").innerHTML = null;

      if (playerScore === 5) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML =
          "u r the best guy out there";
      }

      if (playerScore === 4) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "u r a very good guy";
      }
      if (playerScore === 3) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "I mean, you're decent";
      }
      if (playerScore === 2) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML = "I mean, you're decent";
      }
      if (playerScore < 2) {
        document.getElementById("result").innerHTML = " Votre Score est";
        document.getElementById("result1").innerHTML = playerScore;
        document.getElementById("result2").innerHTML =
          "yeah even I is sad for u, u r so bad..";
      }
    }
  }
}
//
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

function openNav() {
  document.getElementById("mySidenav").style.width = "150px";
  document.getElementById("main1").style.marginRight = "150px";
  document.getElementById("main2").style.marginRight = "150px";
}

function closeNav() {
  document.getElementById("mySidenav").style.width = "0";
  document.getElementById("main1").style.marginRight = "0";
  document.getElementById("main2").style.marginRight = "0";
}

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
  
    
  }
}

/*Cookie*/
function setCookie(cname,cvalue,exdays) {
  const d = new Date();
  d.setTime(d.getTime() + (exdays*24*60*60*1000));
  let expires = "expires=" + d.toUTCString();
  document.cookie = cname + "=" + cvalue + ";" + expires + ";path=/";
}

function getCookie(cname) {
  let name = cname + "=";
  let decodedCookie = decodeURIComponent(document.cookie);
  let ca = decodedCookie.split(';');
  for(let i = 0; i < ca.length; i++) {
    let c = ca[i];
    while (c.charAt(0) == ' ') {
      c = c.substring(1);
    }
    if (c.indexOf(name) == 0) {
      return c.substring(name.length, c.length);
    }
  }
  return "";
}

function checkCookie() {
  user = getCookie("username");
  if (user != "") {
    window.location.href="C:\\Users\\lucbo\\OneDrive\\Bureau\\CoursInfo\\Html Prog\\SIteweb\\TestQUiz\\hometest.html";
  } else {
     user = document.getElementById("full_name").value;
     setCookie("username", user, 30);
     
  }
}

function HomeRewrite(){
  document.getElementById("rewrite").innerText=user;
  
}





