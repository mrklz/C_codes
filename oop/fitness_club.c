    #include <stdio.h>
    typedef struct {
        int year;
        int mon;
        int day;
    } date;

    struct Client {
        int id_client;
        char last_name[20];
        char first_name[20];
        char middle_name[20];
        long long phone_number;
        char email[50];
        int id_gender;
        date year_of_birth;
    };
    struct Gender {
        int id_gender;
        char gender_name[10];
    };
    struct SubscriptionType {
        int id_subscription_type;
        char subscription_name[40];
    };
    struct Subscription {
        int id_subscription;
        int id_client;
        int id_subscription_type;
        date start_date;
        date end_date;
        float price;
    };
    struct Trainer {
        int id_trainer;
        char last_name[20];
        char first_name[20];
        char middle_name[20];
        char specialization[60];
        char work_schedule[60];
    };
    struct Visits {
        int id_visit;
        int id_subscription;
        date visit_date;
        int end_time;
        int start_time;
    };
    void getClient(struct Client *c) {
        scanf("%d %s %s %s %lld %s %d %d %d %d", &c->id_client, c->last_name, c->first_name, c->middle_name, &c->phone_number, c->email, &c->id_gender, &c->year_of_birth.year, &c->year_of_birth.mon, &c->year_of_birth.day);
    }
    void getGender(struct Gender *g) {
        scanf("%d %s", &g->id_gender, g->gender_name);
    }
    void getSubscriptionType(struct SubscriptionType *st) {
        scanf(" %d %[^\n]", &st->id_subscription_type, st->subscription_name);
    }
    void getSubscription(struct Subscription *s) {
        scanf(" %d %d %d %f %d %d %d %d %d %d",
            &s->id_subscription, &s->id_client, &s->id_subscription_type, &s->price,
            &s->start_date.year, &s->start_date.mon, &s->start_date.day,
            &s->end_date.year, &s->end_date.mon, &s->end_date.day
            );
    }
    void getTrainer(struct Trainer *t) {
        scanf("%d %s %s %s", &t->id_trainer, t->last_name, t->first_name, t->middle_name);
        scanf(" %[^\n]", t->specialization);
        t->work_schedule[0] = '\0'; 
    }
    void getVisits(struct Visits *v) {
        scanf("%d %d %d %d %d %d %d %d",
            &v->id_visit, &v->id_subscription,
            &v->visit_date.year, &v->visit_date.mon, &v->visit_date.day,
            &v->start_time, &v->end_time);
    }

    int main(){
        struct Client clients[9];
        struct Gender genders[2];
        struct SubscriptionType subscription_types[5];
        struct Subscription subscriptions[9];
        struct Trainer trainers[9];
        struct Visits visits[9];

        for (int i = 0; i < 9; i++) {
            getClient(&clients[i]);
        }
        for (int i = 0; i < 2; i++) {
            getGender(&genders[i]);
        }
        for (int i = 0; i < 5; i++) {
            getSubscriptionType(&subscription_types[i]);
        }
        for (int i = 0; i < 9; i++) {
            getSubscription(&subscriptions[i]);
        }
        for (int i = 0; i < 9; i++) {
            getTrainer(&trainers[i]);
        }
        for (int i = 0; i < 8; i++) {
            getVisits(&visits[i]);
        }
        return 0;
    }
