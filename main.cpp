#include <iostream>
#include "another_file.h"

extern "C" {
#include "libavutil/log.h"
#include "libavformat/avformat.h"
}

int main() {
    int ret;
    av_log_set_level(AV_LOG_DEBUG);
    av_log(NULL, AV_LOG_INFO, "test\n");
    avformat_network_init();
    avformat_network_deinit();
    return 0;
}
