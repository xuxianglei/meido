#include "timer.h"
#include <ctime>
#include <thread>

[[noreturn]] void taskTimer() {
    while (true) {
        std::time_t now = std::time(nullptr);
        std::tm *tm_info = std::localtime(&now); // current time

        if (tm_info->tm_wday == 1 && tm_info->tm_hour == 8 && tm_info->tm_min == 0) { /* Monday 8:00:00 */
            // TODO: 执行定时任务
            std::this_thread::sleep_for(std::chrono::minutes(1));
        }

        std::this_thread::sleep_for(std::chrono::seconds(55));
    }
}
