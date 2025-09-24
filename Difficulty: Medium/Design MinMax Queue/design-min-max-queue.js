class SpecialQueue {
    // Code with Radheshyam (.^.)
    
  constructor() {
    this.mainQueue = [];
    this.minDeque = [];
    this.maxDeque = [];
    this.frontIndex = 0;
    this.minFrontIndex = 0;
    this.maxFrontIndex = 0;
  }

  enqueue(x) {
    this.mainQueue.push(x);
    while (
      this.minDeque.length > this.minFrontIndex &&
      this.minDeque[this.minDeque.length - 1] > x
    ) {
      this.minDeque.pop();
    }
    this.minDeque.push(x);
    while (
      this.maxDeque.length > this.maxFrontIndex &&
      this.maxDeque[this.maxDeque.length - 1] < x
    ) {
      this.maxDeque.pop();
    }
    this.maxDeque.push(x);
  }

  dequeue() {
    if (this.frontIndex >= this.mainQueue.length) return;

    const frontElement = this.mainQueue[this.frontIndex];
    this.frontIndex++;

    if (frontElement === this.minDeque[this.minFrontIndex]) {
      this.minFrontIndex++;
    }

    if (frontElement === this.maxDeque[this.maxFrontIndex]) {
      this.maxFrontIndex++;
    }

    if (this.frontIndex > 1000 && this.frontIndex > this.mainQueue.length / 2) {
      this.mainQueue = this.mainQueue.slice(this.frontIndex);
      this.minDeque = this.minDeque.slice(this.minFrontIndex);
      this.maxDeque = this.maxDeque.slice(this.maxFrontIndex);
      this.frontIndex = 0;
      this.minFrontIndex = 0;
      this.maxFrontIndex = 0;
    }

    return frontElement;
  }

  getFront() {
    return this.frontIndex < this.mainQueue.length
      ? this.mainQueue[this.frontIndex]
      : undefined;
  }

  getMin() {
    return this.minFrontIndex < this.minDeque.length
      ? this.minDeque[this.minFrontIndex]
      : undefined;
  }

  getMax() {
    return this.maxFrontIndex < this.maxDeque.length
      ? this.maxDeque[this.maxFrontIndex]
      : undefined;
  }
}