for (i = 0; i < document.querySelectorAll(".drum").length; i++) {
    document.querySelectorAll(".drum")[i].addEventListener("click", function () {
        var key = this.innerHTML;
        onKey(key);
    });
};

document.addEventListener("keypress", function (e) {
    onKey(e.key);
})



function onKey(key) {
    console.log(key);
    switch (key) {
        case 'a':
            var aud = new Audio("/sounds/tom-1.mp3");
            aud.play();
            console.log("click");
            break;

        case 's':
            var aud = new Audio("/sounds/tom-3.mp3");
            aud.play();
            break;

        case 'd':
            var aud = new Audio("/sounds/tom-4.mp3");
            aud.play();
            break;

        case 'f':
            var aud = new Audio("/sounds/tom-2.mp3");
            aud.play();
            break;

        case 'j':
            var aud = new Audio("/sounds/snare.mp3");
            aud.play();
            break;

        case 'k':
            var aud = new Audio("/sounds/kick-bass.mp3");
            aud.play();
            break;

        case 'l':
            var aud = new Audio("/sounds/crash.mp3");
            aud.play();
            break;

        default:
            console.log(key);
    }

    document.querySelector("." + key).classList.add("pressed");
    setTimeout(() => {
        document.querySelector("." + key).classList.remove("pressed");
    }, 100);

}
