# k8s-nginx-letsencrypt

This repository contains deployment manifests aimed at Kubernetes clusters running on Google Container Engine (GCE), that use [`kube-lego`](https://github.com/jetstack/kube-lego) to automatically request certificates from Let's Encrypt.

It exposes an nginx deployment using a service and creates an ingress controller to point at the service. The Ingress resource creates an HTTP(S) load balancer, which terminates TLS through `kube-lego`.

## Getting Started

1. Register a static IP with GCE:

```
gcloud compute addresses create nginx-letsencrypt-demo-static-ip --global
```

The created IP named `nginx-letsencrypt-demo-static-ip` is referred to in `ingress-tls.yaml`.

2. The sample uses the hostname `labmicroservices1.hopto.org`. To use a different one, change this in `ingress-tls.yaml` and make sure to register this hostname with a DNS so that Let'sEncrypt can resolve it.

3. Create K8s resources:

```
kubectl create -f kube-lego-configmap.yaml
kubectl create -f kube-lego.yaml
kubectl create -f namespace.yaml
kubectl create -f nginx.yaml
kubectl create -f service.yaml
kubectl create -f ingress-tls.yaml
```

4. If everything worked out, you should be able to see nginx's welcome page at http://labmicroservices1.hopto.org and https://labmicroservices1.hopto.org.

## Delete Resources

```
kubectl --namespace=nginx-letsencrypt-demo delete ingress nginx-ingress
kubectl --namespace=nginx-letsencrypt-demo delete service nginx
kubectl --namespace=nginx-letsencrypt-demo delete deployment nginx
```

## References

- [Auto DNS and SSL on K8s with LetsEncrypt Part 1](http://www.matt-j.co.uk/2017/03/03/automatic-dns-and-ssl-on-kubernetes-with-letsencrypt-part-1/)
- [Auto DNS and SSL on K8s with LetsEncrypt Part 2](https://www.matt-j.co.uk/2017/03/03/automatic-dns-and-ssl-on-kubernetes-with-letsencrypt-part-2/)
- [Setting Up HTTP Load Balancing with Ingress](https://cloud.google.com/container-engine/docs/tutorials/http-balancer)