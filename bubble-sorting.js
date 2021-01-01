// Bubble sorting
const array_sorting = (arr) => {
  for (let i = 0; i < arr.length; i++) {
    for (let k = arr.length - 1; k > i; k--) {
      if (arr[i] > arr[k]) {
        let curr_pos = arr[k];
        arr[k] = arr[i];
        arr[i] = curr_pos;
      }
    }
  }
  return arr;
};

// using navigator API. Nothing to do with bubble sorting
function getCoordinates() {
  const promise = new Promise((resolve, reject) => {
    window.navigator.geolocation.getCurrentPosition(
      (succ) => {
        succ ? resolve(succ) : null;
      },
      (err) => {
        err ? reject(err) : null;
      }
    );
  });
  return promise;
}

getCoordinates().then((coordinates) => {
  setTimeout(() => {
    console.log(`${coordinates}`);
  }, 500);
});

console.log(
  `Sorted array: [${array_sorting([45, -5, 65, 87, 5.4, 23, 2, 1, 14, 14, 5])}]`
);
