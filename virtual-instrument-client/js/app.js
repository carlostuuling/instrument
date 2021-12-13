// Socket.io server configuration
// const socket = io("http://localhost:8000");
const socket = io("http://10.25.185.88:8000");

socket.on("connect", () => {
  console.log("Client connected to: " + socket.id);
  online = true;
});

socket.on('send-data', res => {
  recieveData(res); 
});

socket.on("disconnect", () => {
  console.log("Client disconnected from" + socket.id); 
});