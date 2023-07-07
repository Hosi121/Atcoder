#include <bits/stdc++.h>
using namespace std;
 
struct Person {
    int id;
    long long success, total;
};
 
bool comparePersons(const Person &a, const Person &b) {
    long long a_value = a.success * b.total;
    long long b_value = b.success * a.total;
    if (a_value != b_value)
        return a_value > b_value;
    else
        return a.id < b.id;
}
 
int main() {
    int N;
    cin >> N;
 
    vector<Person> persons(N);
    for (int i = 0; i < N; i++) {
        long long A, B;
        cin >> A >> B;
        persons[i].id = i + 1;
        persons[i].success = A;
        persons[i].total = A + B;
    }
 
    sort(persons.begin(), persons.end(), comparePersons);
 
    for (const auto &p : persons) {
        cout << p.id << " ";
    }
 
    return 0;
}