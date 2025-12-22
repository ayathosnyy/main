# Base Image
FROM gcc:latest

# Set working directory
WORKDIR /app

# Copy source code
COPY main.cpp .

# Compile the C++ program
RUN g++ main.cpp -o app

ENV APP_NAME="Simple C++ Docker App"

# Run the application
CMD ["./app"]
