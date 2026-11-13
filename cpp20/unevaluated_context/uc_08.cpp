 lhs, const Task& rhs) {
        return lhs.priority < rhs.priority;
    }
);

using TaskQueue = std::priority_queue<
    Task,
    std::vector<Task>,
    TaskCompare
>;

int main()
{
    TaskQueue tasks;

    tasks.push({1, 20});
    tasks.push({2, 50});
    tasks.push({3, 10});

    // Highest priority first
    auto task = tasks.top();
}
