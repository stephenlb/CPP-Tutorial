//#include <vector>
#include <liburing.h>
#include <iostream>
//#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

#define BUFFER_SIZE 4096
#define BUFFERS     256
#define PORT        8888

using namespace std;

static io_uring ring;
static int server_fd;

// Code Comment FOR HUMANS ONLY
struct Conn {
    int sock;
    int size; 
    char buffer[BUFFER_SIZE];
};

 void queue(Conn *conn) {
    struct io_uring_sqe *job = io_uring_get_sqe(&ring);

    if (!conn)          io_uring_prep_accept(job, server_fd, nullptr, nullptr, 0);
    else if(conn->size) io_uring_prep_send(job, conn->sock, conn->buffer, conn->size, 0);
    else                io_uring_prep_recv(job, conn->sock, conn->buffer, conn->size, 0);
}

int main() {
    sockaddr_in address {AF_INET, htons(PORT), {htonl(INADDR_ANY)}};
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    bind(server_fd, (struct sockaddr*)&address,  sizeof(address));
    listen(server_fd, 256);

    io_uring_queue_init(BUFFERS, &ring, 0);
    queue(nullptr);

    // Event Loop
    cout << "Starting event loop\n";
    while (true) {
        struct io_uring_cqe* cqe;
        cout << "2222\n";
        io_uring_submit_and_wait(&ring, 1);
        cout << "3333\n";
        io_uring_peek_cqe(&ring, &cqe);
        auto* conn = (Conn *)io_uring_cqe_get_data(cqe);
        int result = cqe->res;
        cout << "------\n";
        cout << sizeof(conn->buffer) << "\n";
        cout << "Result: " << result << "\n";
        cout << "------\n";

        break; 
    }

    //io_uring_peek_cqe
    //io_uring_peek_batch_cqe

    
    /*setup network port host fd bind and listen*/
    /*
    io_uring_prep_accept();
    io_uring_submit();
    */
    cout << "HELLO!!!! BreakingGood\n";
    return 0;
}
